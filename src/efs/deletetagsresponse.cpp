// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagsresponse.h"
#include "deletetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteTagsResponse
 * \brief The DeleteTagsResponse class provides an interace for Efs DeleteTags responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::deleteTags
 */

/*!
 * Constructs a DeleteTagsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTagsResponse::DeleteTagsResponse(
        const DeleteTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DeleteTagsResponsePrivate(this), parent)
{
    setRequest(new DeleteTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTagsRequest * DeleteTagsResponse::request() const
{
    Q_D(const DeleteTagsResponse);
    return static_cast<const DeleteTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DeleteTags \a response.
 */
void DeleteTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DeleteTagsResponsePrivate
 * \brief The DeleteTagsResponsePrivate class provides private implementation for DeleteTagsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteTagsResponsePrivate object with public implementation \a q.
 */
DeleteTagsResponsePrivate::DeleteTagsResponsePrivate(
    DeleteTagsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DeleteTags response element from \a xml.
 */
void DeleteTagsResponsePrivate::parseDeleteTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws

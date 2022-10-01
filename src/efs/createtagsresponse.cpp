// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtagsresponse.h"
#include "createtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateTagsResponse
 * \brief The CreateTagsResponse class provides an interace for Efs CreateTags responses.
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
 * \sa EfsClient::createTags
 */

/*!
 * Constructs a CreateTagsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTagsResponse::CreateTagsResponse(
        const CreateTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new CreateTagsResponsePrivate(this), parent)
{
    setRequest(new CreateTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTagsRequest * CreateTagsResponse::request() const
{
    Q_D(const CreateTagsResponse);
    return static_cast<const CreateTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs CreateTags \a response.
 */
void CreateTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::CreateTagsResponsePrivate
 * \brief The CreateTagsResponsePrivate class provides private implementation for CreateTagsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateTagsResponsePrivate object with public implementation \a q.
 */
CreateTagsResponsePrivate::CreateTagsResponsePrivate(
    CreateTagsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs CreateTags response element from \a xml.
 */
void CreateTagsResponsePrivate::parseCreateTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws

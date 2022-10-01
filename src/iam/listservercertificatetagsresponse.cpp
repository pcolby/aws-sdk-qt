// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservercertificatetagsresponse.h"
#include "listservercertificatetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListServerCertificateTagsResponse
 * \brief The ListServerCertificateTagsResponse class provides an interace for Iam ListServerCertificateTags responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::listServerCertificateTags
 */

/*!
 * Constructs a ListServerCertificateTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListServerCertificateTagsResponse::ListServerCertificateTagsResponse(
        const ListServerCertificateTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListServerCertificateTagsResponsePrivate(this), parent)
{
    setRequest(new ListServerCertificateTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServerCertificateTagsRequest * ListServerCertificateTagsResponse::request() const
{
    Q_D(const ListServerCertificateTagsResponse);
    return static_cast<const ListServerCertificateTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListServerCertificateTags \a response.
 */
void ListServerCertificateTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServerCertificateTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListServerCertificateTagsResponsePrivate
 * \brief The ListServerCertificateTagsResponsePrivate class provides private implementation for ListServerCertificateTagsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListServerCertificateTagsResponsePrivate object with public implementation \a q.
 */
ListServerCertificateTagsResponsePrivate::ListServerCertificateTagsResponsePrivate(
    ListServerCertificateTagsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListServerCertificateTags response element from \a xml.
 */
void ListServerCertificateTagsResponsePrivate::parseListServerCertificateTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServerCertificateTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

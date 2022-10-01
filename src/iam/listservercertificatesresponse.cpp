// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservercertificatesresponse.h"
#include "listservercertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListServerCertificatesResponse
 * \brief The ListServerCertificatesResponse class provides an interace for Iam ListServerCertificates responses.
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
 * \sa IamClient::listServerCertificates
 */

/*!
 * Constructs a ListServerCertificatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListServerCertificatesResponse::ListServerCertificatesResponse(
        const ListServerCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListServerCertificatesResponsePrivate(this), parent)
{
    setRequest(new ListServerCertificatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServerCertificatesRequest * ListServerCertificatesResponse::request() const
{
    Q_D(const ListServerCertificatesResponse);
    return static_cast<const ListServerCertificatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListServerCertificates \a response.
 */
void ListServerCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServerCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListServerCertificatesResponsePrivate
 * \brief The ListServerCertificatesResponsePrivate class provides private implementation for ListServerCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListServerCertificatesResponsePrivate object with public implementation \a q.
 */
ListServerCertificatesResponsePrivate::ListServerCertificatesResponsePrivate(
    ListServerCertificatesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListServerCertificates response element from \a xml.
 */
void ListServerCertificatesResponsePrivate::parseListServerCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServerCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws

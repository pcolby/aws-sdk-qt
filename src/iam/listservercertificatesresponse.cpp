/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listservercertificatesresponse.h"
#include "listservercertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListServerCertificatesResponse
 * \brief The ListServerCertificatesResponse class provides an interace for IAM ListServerCertificates responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
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
 * Parses a successful IAM ListServerCertificates \a response.
 */
void ListServerCertificatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServerCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::ListServerCertificatesResponsePrivate
 * \brief The ListServerCertificatesResponsePrivate class provides private implementation for ListServerCertificatesResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListServerCertificatesResponsePrivate object with public implementation \a q.
 */
ListServerCertificatesResponsePrivate::ListServerCertificatesResponsePrivate(
    ListServerCertificatesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM ListServerCertificates response element from \a xml.
 */
void ListServerCertificatesResponsePrivate::parseListServerCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServerCertificatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws

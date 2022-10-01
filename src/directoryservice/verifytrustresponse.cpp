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

#include "verifytrustresponse.h"
#include "verifytrustresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::VerifyTrustResponse
 * \brief The VerifyTrustResponse class provides an interace for DirectoryService VerifyTrust responses.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>Directory Service</fullname>
 * 
 *  Directory Service is a web service that makes it easy for you to setup and run directories in the Amazon Web Services
 *  cloud, or connect your Amazon Web Services resources with an existing self-managed Microsoft Active Directory. This
 *  guide provides detailed information about Directory Service operations, data types, parameters, and errors. For
 *  information about Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">Directory
 *  Service</a> and the <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
 *  Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  Directory Service and other Amazon Web Services services. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::verifyTrust
 */

/*!
 * Constructs a VerifyTrustResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyTrustResponse::VerifyTrustResponse(
        const VerifyTrustRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new VerifyTrustResponsePrivate(this), parent)
{
    setRequest(new VerifyTrustRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyTrustRequest * VerifyTrustResponse::request() const
{
    Q_D(const VerifyTrustResponse);
    return static_cast<const VerifyTrustRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService VerifyTrust \a response.
 */
void VerifyTrustResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyTrustResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::VerifyTrustResponsePrivate
 * \brief The VerifyTrustResponsePrivate class provides private implementation for VerifyTrustResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a VerifyTrustResponsePrivate object with public implementation \a q.
 */
VerifyTrustResponsePrivate::VerifyTrustResponsePrivate(
    VerifyTrustResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService VerifyTrust response element from \a xml.
 */
void VerifyTrustResponsePrivate::parseVerifyTrustResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyTrustResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

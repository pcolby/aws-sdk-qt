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

#include "describetrustsresponse.h"
#include "describetrustsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DescribeTrustsResponse
 * \brief The DescribeTrustsResponse class provides an interace for DirectoryService DescribeTrusts responses.
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
 * \sa DirectoryServiceClient::describeTrusts
 */

/*!
 * Constructs a DescribeTrustsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrustsResponse::DescribeTrustsResponse(
        const DescribeTrustsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeTrustsResponsePrivate(this), parent)
{
    setRequest(new DescribeTrustsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrustsRequest * DescribeTrustsResponse::request() const
{
    Q_D(const DescribeTrustsResponse);
    return static_cast<const DescribeTrustsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService DescribeTrusts \a response.
 */
void DescribeTrustsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrustsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::DescribeTrustsResponsePrivate
 * \brief The DescribeTrustsResponsePrivate class provides private implementation for DescribeTrustsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DescribeTrustsResponsePrivate object with public implementation \a q.
 */
DescribeTrustsResponsePrivate::DescribeTrustsResponsePrivate(
    DescribeTrustsResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService DescribeTrusts response element from \a xml.
 */
void DescribeTrustsResponsePrivate::parseDescribeTrustsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrustsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

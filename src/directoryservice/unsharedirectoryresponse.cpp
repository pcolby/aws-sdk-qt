// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unsharedirectoryresponse.h"
#include "unsharedirectoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::UnshareDirectoryResponse
 * \brief The UnshareDirectoryResponse class provides an interace for DirectoryService UnshareDirectory responses.
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
 * \sa DirectoryServiceClient::unshareDirectory
 */

/*!
 * Constructs a UnshareDirectoryResponse object for \a reply to \a request, with parent \a parent.
 */
UnshareDirectoryResponse::UnshareDirectoryResponse(
        const UnshareDirectoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new UnshareDirectoryResponsePrivate(this), parent)
{
    setRequest(new UnshareDirectoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnshareDirectoryRequest * UnshareDirectoryResponse::request() const
{
    Q_D(const UnshareDirectoryResponse);
    return static_cast<const UnshareDirectoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService UnshareDirectory \a response.
 */
void UnshareDirectoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnshareDirectoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::UnshareDirectoryResponsePrivate
 * \brief The UnshareDirectoryResponsePrivate class provides private implementation for UnshareDirectoryResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a UnshareDirectoryResponsePrivate object with public implementation \a q.
 */
UnshareDirectoryResponsePrivate::UnshareDirectoryResponsePrivate(
    UnshareDirectoryResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService UnshareDirectory response element from \a xml.
 */
void UnshareDirectoryResponsePrivate::parseUnshareDirectoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnshareDirectoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

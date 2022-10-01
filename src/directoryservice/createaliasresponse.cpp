// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaliasresponse.h"
#include "createaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::CreateAliasResponse
 * \brief The CreateAliasResponse class provides an interace for DirectoryService CreateAlias responses.
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
 * \sa DirectoryServiceClient::createAlias
 */

/*!
 * Constructs a CreateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAliasResponse::CreateAliasResponse(
        const CreateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateAliasResponsePrivate(this), parent)
{
    setRequest(new CreateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAliasRequest * CreateAliasResponse::request() const
{
    Q_D(const CreateAliasResponse);
    return static_cast<const CreateAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectoryService CreateAlias \a response.
 */
void CreateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectoryService::CreateAliasResponsePrivate
 * \brief The CreateAliasResponsePrivate class provides private implementation for CreateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a CreateAliasResponsePrivate object with public implementation \a q.
 */
CreateAliasResponsePrivate::CreateAliasResponsePrivate(
    CreateAliasResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/*!
 * Parses a DirectoryService CreateAlias response element from \a xml.
 */
void CreateAliasResponsePrivate::parseCreateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectoryService
} // namespace QtAws

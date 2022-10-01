// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevelopmentschemaarnsresponse.h"
#include "listdevelopmentschemaarnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListDevelopmentSchemaArnsResponse
 * \brief The ListDevelopmentSchemaArnsResponse class provides an interace for CloudDirectory ListDevelopmentSchemaArns responses.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::listDevelopmentSchemaArns
 */

/*!
 * Constructs a ListDevelopmentSchemaArnsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevelopmentSchemaArnsResponse::ListDevelopmentSchemaArnsResponse(
        const ListDevelopmentSchemaArnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListDevelopmentSchemaArnsResponsePrivate(this), parent)
{
    setRequest(new ListDevelopmentSchemaArnsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevelopmentSchemaArnsRequest * ListDevelopmentSchemaArnsResponse::request() const
{
    Q_D(const ListDevelopmentSchemaArnsResponse);
    return static_cast<const ListDevelopmentSchemaArnsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListDevelopmentSchemaArns \a response.
 */
void ListDevelopmentSchemaArnsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevelopmentSchemaArnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListDevelopmentSchemaArnsResponsePrivate
 * \brief The ListDevelopmentSchemaArnsResponsePrivate class provides private implementation for ListDevelopmentSchemaArnsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListDevelopmentSchemaArnsResponsePrivate object with public implementation \a q.
 */
ListDevelopmentSchemaArnsResponsePrivate::ListDevelopmentSchemaArnsResponsePrivate(
    ListDevelopmentSchemaArnsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListDevelopmentSchemaArns response element from \a xml.
 */
void ListDevelopmentSchemaArnsResponsePrivate::parseListDevelopmentSchemaArnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevelopmentSchemaArnsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws

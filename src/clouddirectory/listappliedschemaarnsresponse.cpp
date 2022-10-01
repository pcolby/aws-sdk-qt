// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappliedschemaarnsresponse.h"
#include "listappliedschemaarnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListAppliedSchemaArnsResponse
 * \brief The ListAppliedSchemaArnsResponse class provides an interace for CloudDirectory ListAppliedSchemaArns responses.
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
 * \sa CloudDirectoryClient::listAppliedSchemaArns
 */

/*!
 * Constructs a ListAppliedSchemaArnsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppliedSchemaArnsResponse::ListAppliedSchemaArnsResponse(
        const ListAppliedSchemaArnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListAppliedSchemaArnsResponsePrivate(this), parent)
{
    setRequest(new ListAppliedSchemaArnsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppliedSchemaArnsRequest * ListAppliedSchemaArnsResponse::request() const
{
    Q_D(const ListAppliedSchemaArnsResponse);
    return static_cast<const ListAppliedSchemaArnsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudDirectory ListAppliedSchemaArns \a response.
 */
void ListAppliedSchemaArnsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppliedSchemaArnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudDirectory::ListAppliedSchemaArnsResponsePrivate
 * \brief The ListAppliedSchemaArnsResponsePrivate class provides private implementation for ListAppliedSchemaArnsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListAppliedSchemaArnsResponsePrivate object with public implementation \a q.
 */
ListAppliedSchemaArnsResponsePrivate::ListAppliedSchemaArnsResponsePrivate(
    ListAppliedSchemaArnsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * Parses a CloudDirectory ListAppliedSchemaArns response element from \a xml.
 */
void ListAppliedSchemaArnsResponsePrivate::parseListAppliedSchemaArnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppliedSchemaArnsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudDirectory
} // namespace QtAws

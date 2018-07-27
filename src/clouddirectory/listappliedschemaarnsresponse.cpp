/*
    Copyright 2013-2018 Paul Colby

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
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
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

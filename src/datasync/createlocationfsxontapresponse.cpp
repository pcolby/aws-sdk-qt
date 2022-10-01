// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationfsxontapresponse.h"
#include "createlocationfsxontapresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxOntapResponse
 * \brief The CreateLocationFsxOntapResponse class provides an interace for DataSync CreateLocationFsxOntap responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::createLocationFsxOntap
 */

/*!
 * Constructs a CreateLocationFsxOntapResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationFsxOntapResponse::CreateLocationFsxOntapResponse(
        const CreateLocationFsxOntapRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationFsxOntapResponsePrivate(this), parent)
{
    setRequest(new CreateLocationFsxOntapRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationFsxOntapRequest * CreateLocationFsxOntapResponse::request() const
{
    Q_D(const CreateLocationFsxOntapResponse);
    return static_cast<const CreateLocationFsxOntapRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationFsxOntap \a response.
 */
void CreateLocationFsxOntapResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationFsxOntapResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxOntapResponsePrivate
 * \brief The CreateLocationFsxOntapResponsePrivate class provides private implementation for CreateLocationFsxOntapResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxOntapResponsePrivate object with public implementation \a q.
 */
CreateLocationFsxOntapResponsePrivate::CreateLocationFsxOntapResponsePrivate(
    CreateLocationFsxOntapResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationFsxOntap response element from \a xml.
 */
void CreateLocationFsxOntapResponsePrivate::parseCreateLocationFsxOntapResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationFsxOntapResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws

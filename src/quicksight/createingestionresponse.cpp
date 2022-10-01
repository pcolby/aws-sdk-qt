// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createingestionresponse.h"
#include "createingestionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateIngestionResponse
 * \brief The CreateIngestionResponse class provides an interace for QuickSight CreateIngestion responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createIngestion
 */

/*!
 * Constructs a CreateIngestionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIngestionResponse::CreateIngestionResponse(
        const CreateIngestionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateIngestionResponsePrivate(this), parent)
{
    setRequest(new CreateIngestionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIngestionRequest * CreateIngestionResponse::request() const
{
    Q_D(const CreateIngestionResponse);
    return static_cast<const CreateIngestionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateIngestion \a response.
 */
void CreateIngestionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIngestionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateIngestionResponsePrivate
 * \brief The CreateIngestionResponsePrivate class provides private implementation for CreateIngestionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateIngestionResponsePrivate object with public implementation \a q.
 */
CreateIngestionResponsePrivate::CreateIngestionResponsePrivate(
    CreateIngestionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateIngestion response element from \a xml.
 */
void CreateIngestionResponsePrivate::parseCreateIngestionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIngestionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

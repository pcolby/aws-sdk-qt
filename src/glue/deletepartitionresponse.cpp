// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepartitionresponse.h"
#include "deletepartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionResponse
 * \brief The DeletePartitionResponse class provides an interace for Glue DeletePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deletePartition
 */

/*!
 * Constructs a DeletePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePartitionResponse::DeletePartitionResponse(
        const DeletePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeletePartitionResponsePrivate(this), parent)
{
    setRequest(new DeletePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePartitionRequest * DeletePartitionResponse::request() const
{
    Q_D(const DeletePartitionResponse);
    return static_cast<const DeletePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeletePartition \a response.
 */
void DeletePartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeletePartitionResponsePrivate
 * \brief The DeletePartitionResponsePrivate class provides private implementation for DeletePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeletePartitionResponsePrivate object with public implementation \a q.
 */
DeletePartitionResponsePrivate::DeletePartitionResponsePrivate(
    DeletePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeletePartition response element from \a xml.
 */
void DeletePartitionResponsePrivate::parseDeletePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws

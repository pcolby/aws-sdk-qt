// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccountcustomizationresponse.h"
#include "deleteaccountcustomizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteAccountCustomizationResponse
 * \brief The DeleteAccountCustomizationResponse class provides an interace for QuickSight DeleteAccountCustomization responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteAccountCustomization
 */

/*!
 * Constructs a DeleteAccountCustomizationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccountCustomizationResponse::DeleteAccountCustomizationResponse(
        const DeleteAccountCustomizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteAccountCustomizationResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountCustomizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccountCustomizationRequest * DeleteAccountCustomizationResponse::request() const
{
    Q_D(const DeleteAccountCustomizationResponse);
    return static_cast<const DeleteAccountCustomizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteAccountCustomization \a response.
 */
void DeleteAccountCustomizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccountCustomizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteAccountCustomizationResponsePrivate
 * \brief The DeleteAccountCustomizationResponsePrivate class provides private implementation for DeleteAccountCustomizationResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteAccountCustomizationResponsePrivate object with public implementation \a q.
 */
DeleteAccountCustomizationResponsePrivate::DeleteAccountCustomizationResponsePrivate(
    DeleteAccountCustomizationResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteAccountCustomization response element from \a xml.
 */
void DeleteAccountCustomizationResponsePrivate::parseDeleteAccountCustomizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountCustomizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws

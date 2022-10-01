// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportlensresponse.h"
#include "exportlensresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ExportLensResponse
 * \brief The ExportLensResponse class provides an interace for WellArchitected ExportLens responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::exportLens
 */

/*!
 * Constructs a ExportLensResponse object for \a reply to \a request, with parent \a parent.
 */
ExportLensResponse::ExportLensResponse(
        const ExportLensRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ExportLensResponsePrivate(this), parent)
{
    setRequest(new ExportLensRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportLensRequest * ExportLensResponse::request() const
{
    Q_D(const ExportLensResponse);
    return static_cast<const ExportLensRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ExportLens \a response.
 */
void ExportLensResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportLensResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ExportLensResponsePrivate
 * \brief The ExportLensResponsePrivate class provides private implementation for ExportLensResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ExportLensResponsePrivate object with public implementation \a q.
 */
ExportLensResponsePrivate::ExportLensResponsePrivate(
    ExportLensResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ExportLens response element from \a xml.
 */
void ExportLensResponsePrivate::parseExportLensResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportLensResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importlensresponse.h"
#include "importlensresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ImportLensResponse
 * \brief The ImportLensResponse class provides an interace for WellArchitected ImportLens responses.
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
 * \sa WellArchitectedClient::importLens
 */

/*!
 * Constructs a ImportLensResponse object for \a reply to \a request, with parent \a parent.
 */
ImportLensResponse::ImportLensResponse(
        const ImportLensRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ImportLensResponsePrivate(this), parent)
{
    setRequest(new ImportLensRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportLensRequest * ImportLensResponse::request() const
{
    Q_D(const ImportLensResponse);
    return static_cast<const ImportLensRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ImportLens \a response.
 */
void ImportLensResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportLensResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ImportLensResponsePrivate
 * \brief The ImportLensResponsePrivate class provides private implementation for ImportLensResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ImportLensResponsePrivate object with public implementation \a q.
 */
ImportLensResponsePrivate::ImportLensResponsePrivate(
    ImportLensResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ImportLens response element from \a xml.
 */
void ImportLensResponsePrivate::parseImportLensResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportLensResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws

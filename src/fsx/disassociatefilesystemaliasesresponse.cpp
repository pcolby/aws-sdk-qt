// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatefilesystemaliasesresponse.h"
#include "disassociatefilesystemaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesResponse
 * \brief The DisassociateFileSystemAliasesResponse class provides an interace for FSx DisassociateFileSystemAliases responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::disassociateFileSystemAliases
 */

/*!
 * Constructs a DisassociateFileSystemAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateFileSystemAliasesResponse::DisassociateFileSystemAliasesResponse(
        const DisassociateFileSystemAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DisassociateFileSystemAliasesResponsePrivate(this), parent)
{
    setRequest(new DisassociateFileSystemAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateFileSystemAliasesRequest * DisassociateFileSystemAliasesResponse::request() const
{
    Q_D(const DisassociateFileSystemAliasesResponse);
    return static_cast<const DisassociateFileSystemAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DisassociateFileSystemAliases \a response.
 */
void DisassociateFileSystemAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateFileSystemAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DisassociateFileSystemAliasesResponsePrivate
 * \brief The DisassociateFileSystemAliasesResponsePrivate class provides private implementation for DisassociateFileSystemAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DisassociateFileSystemAliasesResponsePrivate object with public implementation \a q.
 */
DisassociateFileSystemAliasesResponsePrivate::DisassociateFileSystemAliasesResponsePrivate(
    DisassociateFileSystemAliasesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DisassociateFileSystemAliases response element from \a xml.
 */
void DisassociateFileSystemAliasesResponsePrivate::parseDisassociateFileSystemAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateFileSystemAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws

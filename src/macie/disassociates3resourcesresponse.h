// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATES3RESOURCESRESPONSE_H
#define QTAWS_DISASSOCIATES3RESOURCESRESPONSE_H

#include "macieresponse.h"
#include "disassociates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class DisassociateS3ResourcesResponsePrivate;

class QTAWSMACIE_EXPORT DisassociateS3ResourcesResponse : public MacieResponse {
    Q_OBJECT

public:
    DisassociateS3ResourcesResponse(const DisassociateS3ResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateS3ResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateS3ResourcesResponse)
    Q_DISABLE_COPY(DisassociateS3ResourcesResponse)

};

} // namespace Macie
} // namespace QtAws

#endif

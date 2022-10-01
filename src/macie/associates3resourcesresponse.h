// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATES3RESOURCESRESPONSE_H
#define QTAWS_ASSOCIATES3RESOURCESRESPONSE_H

#include "macieresponse.h"
#include "associates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class AssociateS3ResourcesResponsePrivate;

class QTAWSMACIE_EXPORT AssociateS3ResourcesResponse : public MacieResponse {
    Q_OBJECT

public:
    AssociateS3ResourcesResponse(const AssociateS3ResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateS3ResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateS3ResourcesResponse)
    Q_DISABLE_COPY(AssociateS3ResourcesResponse)

};

} // namespace Macie
} // namespace QtAws

#endif

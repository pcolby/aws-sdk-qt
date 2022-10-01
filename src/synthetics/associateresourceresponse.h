// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCERESPONSE_H
#define QTAWS_ASSOCIATERESOURCERESPONSE_H

#include "syntheticsresponse.h"
#include "associateresourcerequest.h"

namespace QtAws {
namespace Synthetics {

class AssociateResourceResponsePrivate;

class QTAWSSYNTHETICS_EXPORT AssociateResourceResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    AssociateResourceResponse(const AssociateResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceResponse)
    Q_DISABLE_COPY(AssociateResourceResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHARERESPONSE_H
#define QTAWS_ASSOCIATERESOURCESHARERESPONSE_H

#include "ramresponse.h"
#include "associateresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class AssociateResourceShareResponsePrivate;

class QTAWSRAM_EXPORT AssociateResourceShareResponse : public RamResponse {
    Q_OBJECT

public:
    AssociateResourceShareResponse(const AssociateResourceShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResourceShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceShareResponse)
    Q_DISABLE_COPY(AssociateResourceShareResponse)

};

} // namespace Ram
} // namespace QtAws

#endif

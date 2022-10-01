// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHAREPERMISSIONRESPONSE_H
#define QTAWS_ASSOCIATERESOURCESHAREPERMISSIONRESPONSE_H

#include "ramresponse.h"
#include "associateresourcesharepermissionrequest.h"

namespace QtAws {
namespace Ram {

class AssociateResourceSharePermissionResponsePrivate;

class QTAWSRAM_EXPORT AssociateResourceSharePermissionResponse : public RamResponse {
    Q_OBJECT

public:
    AssociateResourceSharePermissionResponse(const AssociateResourceSharePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateResourceSharePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceSharePermissionResponse)
    Q_DISABLE_COPY(AssociateResourceSharePermissionResponse)

};

} // namespace Ram
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTEQUIPMENTRESPONSE_H
#define QTAWS_LOOKOUTEQUIPMENTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawslookoutequipmentglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace LookoutEquipment {

class LookoutEquipmentResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT LookoutEquipmentResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    LookoutEquipmentResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    LookoutEquipmentResponse(LookoutEquipmentResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutEquipmentResponse)
    Q_DISABLE_COPY(LookoutEquipmentResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBINSTANCERESPONSE_H
#define QTAWS_MODIFYDBINSTANCERESPONSE_H

#include "neptuneresponse.h"
#include "modifydbinstancerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBInstanceResponsePrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBInstanceResponse : public NeptuneResponse {
    Q_OBJECT

public:
    ModifyDBInstanceResponse(const ModifyDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBInstanceResponse)
    Q_DISABLE_COPY(ModifyDBInstanceResponse)

};

} // namespace Neptune
} // namespace QtAws

#endif

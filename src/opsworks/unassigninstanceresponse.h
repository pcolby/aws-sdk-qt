// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNINSTANCERESPONSE_H
#define QTAWS_UNASSIGNINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "unassigninstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class UnassignInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT UnassignInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    UnassignInstanceResponse(const UnassignInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnassignInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignInstanceResponse)
    Q_DISABLE_COPY(UnassignInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

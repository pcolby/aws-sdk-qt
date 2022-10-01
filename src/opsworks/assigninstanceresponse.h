// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNINSTANCERESPONSE_H
#define QTAWS_ASSIGNINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "assigninstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class AssignInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT AssignInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    AssignInstanceResponse(const AssignInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssignInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignInstanceResponse)
    Q_DISABLE_COPY(AssignInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

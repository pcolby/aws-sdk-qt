// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCERESPONSE_H
#define QTAWS_STOPINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "stopinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class StopInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT StopInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    StopInstanceResponse(const StopInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInstanceResponse)
    Q_DISABLE_COPY(StopInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCERESPONSE_H
#define QTAWS_STARTINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "startinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class StartInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT StartInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    StartInstanceResponse(const StartInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstanceResponse)
    Q_DISABLE_COPY(StartInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

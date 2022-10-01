// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKRESPONSE_H
#define QTAWS_STOPSTACKRESPONSE_H

#include "opsworksresponse.h"
#include "stopstackrequest.h"

namespace QtAws {
namespace OpsWorks {

class StopStackResponsePrivate;

class QTAWSOPSWORKS_EXPORT StopStackResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    StopStackResponse(const StopStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStackResponse)
    Q_DISABLE_COPY(StopStackResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

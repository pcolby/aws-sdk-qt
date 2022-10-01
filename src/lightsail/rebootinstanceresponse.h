// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCERESPONSE_H
#define QTAWS_REBOOTINSTANCERESPONSE_H

#include "lightsailresponse.h"
#include "rebootinstancerequest.h"

namespace QtAws {
namespace Lightsail {

class RebootInstanceResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT RebootInstanceResponse : public LightsailResponse {
    Q_OBJECT

public:
    RebootInstanceResponse(const RebootInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootInstanceResponse)
    Q_DISABLE_COPY(RebootInstanceResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif

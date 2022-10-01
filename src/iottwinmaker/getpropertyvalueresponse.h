// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUERESPONSE_H
#define QTAWS_GETPROPERTYVALUERESPONSE_H

#include "iottwinmakerresponse.h"
#include "getpropertyvaluerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT GetPropertyValueResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    GetPropertyValueResponse(const GetPropertyValueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPropertyValueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPropertyValueResponse)
    Q_DISABLE_COPY(GetPropertyValueResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

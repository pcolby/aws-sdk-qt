// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPERTYVALUEHISTORYRESPONSE_H
#define QTAWS_GETPROPERTYVALUEHISTORYRESPONSE_H

#include "iottwinmakerresponse.h"
#include "getpropertyvaluehistoryrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetPropertyValueHistoryResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT GetPropertyValueHistoryResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    GetPropertyValueHistoryResponse(const GetPropertyValueHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPropertyValueHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPropertyValueHistoryResponse)
    Q_DISABLE_COPY(GetPropertyValueHistoryResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif

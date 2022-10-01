// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMINSTANCERESPONSE_H
#define QTAWS_CREATESYSTEMINSTANCERESPONSE_H

#include "iotthingsgraphresponse.h"
#include "createsysteminstancerequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemInstanceResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT CreateSystemInstanceResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    CreateSystemInstanceResponse(const CreateSystemInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSystemInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSystemInstanceResponse)
    Q_DISABLE_COPY(CreateSystemInstanceResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif

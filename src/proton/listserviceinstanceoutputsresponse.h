// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEINSTANCEOUTPUTSRESPONSE_H
#define QTAWS_LISTSERVICEINSTANCEOUTPUTSRESPONSE_H

#include "protonresponse.h"
#include "listserviceinstanceoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListServiceInstanceOutputsResponsePrivate;

class QTAWSPROTON_EXPORT ListServiceInstanceOutputsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServiceInstanceOutputsResponse(const ListServiceInstanceOutputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceInstanceOutputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceInstanceOutputsResponse)
    Q_DISABLE_COPY(ListServiceInstanceOutputsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif

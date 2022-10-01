// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTOUTPUTSRESPONSE_H
#define QTAWS_LISTENVIRONMENTOUTPUTSRESPONSE_H

#include "protonresponse.h"
#include "listenvironmentoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentOutputsResponsePrivate;

class QTAWSPROTON_EXPORT ListEnvironmentOutputsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListEnvironmentOutputsResponse(const ListEnvironmentOutputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEnvironmentOutputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentOutputsResponse)
    Q_DISABLE_COPY(ListEnvironmentOutputsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif

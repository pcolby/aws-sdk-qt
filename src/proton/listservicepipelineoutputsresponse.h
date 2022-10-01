// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEOUTPUTSRESPONSE_H
#define QTAWS_LISTSERVICEPIPELINEOUTPUTSRESPONSE_H

#include "protonresponse.h"
#include "listservicepipelineoutputsrequest.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineOutputsResponsePrivate;

class QTAWSPROTON_EXPORT ListServicePipelineOutputsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListServicePipelineOutputsResponse(const ListServicePipelineOutputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServicePipelineOutputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicePipelineOutputsResponse)
    Q_DISABLE_COPY(ListServicePipelineOutputsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif

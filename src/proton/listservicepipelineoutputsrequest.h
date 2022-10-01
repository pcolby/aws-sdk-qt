// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPIPELINEOUTPUTSREQUEST_H
#define QTAWS_LISTSERVICEPIPELINEOUTPUTSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListServicePipelineOutputsRequestPrivate;

class QTAWSPROTON_EXPORT ListServicePipelineOutputsRequest : public ProtonRequest {

public:
    ListServicePipelineOutputsRequest(const ListServicePipelineOutputsRequest &other);
    ListServicePipelineOutputsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServicePipelineOutputsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif

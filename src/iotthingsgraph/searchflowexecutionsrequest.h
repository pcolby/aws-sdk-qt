// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFLOWEXECUTIONSREQUEST_H
#define QTAWS_SEARCHFLOWEXECUTIONSREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchFlowExecutionsRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchFlowExecutionsRequest : public IoTThingsGraphRequest {

public:
    SearchFlowExecutionsRequest(const SearchFlowExecutionsRequest &other);
    SearchFlowExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchFlowExecutionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTHINGSREQUEST_H
#define QTAWS_SEARCHTHINGSREQUEST_H

#include "iotthingsgraphrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchThingsRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchThingsRequest : public IoTThingsGraphRequest {

public:
    SearchThingsRequest(const SearchThingsRequest &other);
    SearchThingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchThingsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif

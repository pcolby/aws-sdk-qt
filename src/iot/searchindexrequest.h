// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHINDEXREQUEST_H
#define QTAWS_SEARCHINDEXREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class SearchIndexRequestPrivate;

class QTAWSIOT_EXPORT SearchIndexRequest : public IoTRequest {

public:
    SearchIndexRequest(const SearchIndexRequest &other);
    SearchIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchIndexRequest)

};

} // namespace IoT
} // namespace QtAws

#endif

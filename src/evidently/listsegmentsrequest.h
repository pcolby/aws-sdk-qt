// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTSREQUEST_H
#define QTAWS_LISTSEGMENTSREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class ListSegmentsRequestPrivate;

class QTAWSEVIDENTLY_EXPORT ListSegmentsRequest : public EvidentlyRequest {

public:
    ListSegmentsRequest(const ListSegmentsRequest &other);
    ListSegmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSegmentsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

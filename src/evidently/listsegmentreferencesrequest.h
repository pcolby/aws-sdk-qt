// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSEGMENTREFERENCESREQUEST_H
#define QTAWS_LISTSEGMENTREFERENCESREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class ListSegmentReferencesRequestPrivate;

class QTAWSEVIDENTLY_EXPORT ListSegmentReferencesRequest : public EvidentlyRequest {

public:
    ListSegmentReferencesRequest(const ListSegmentReferencesRequest &other);
    ListSegmentReferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSegmentReferencesRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

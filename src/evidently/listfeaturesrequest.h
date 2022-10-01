// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATURESREQUEST_H
#define QTAWS_LISTFEATURESREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class ListFeaturesRequestPrivate;

class QTAWSEVIDENTLY_EXPORT ListFeaturesRequest : public EvidentlyRequest {

public:
    ListFeaturesRequest(const ListFeaturesRequest &other);
    ListFeaturesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFeaturesRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif

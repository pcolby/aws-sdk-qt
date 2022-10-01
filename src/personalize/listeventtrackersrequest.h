// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTRACKERSREQUEST_H
#define QTAWS_LISTEVENTTRACKERSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListEventTrackersRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListEventTrackersRequest : public PersonalizeRequest {

public:
    ListEventTrackersRequest(const ListEventTrackersRequest &other);
    ListEventTrackersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventTrackersRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif

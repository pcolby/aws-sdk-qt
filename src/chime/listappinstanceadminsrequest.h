// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSREQUEST_H
#define QTAWS_LISTAPPINSTANCEADMINSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstanceAdminsRequestPrivate;

class QTAWSCHIME_EXPORT ListAppInstanceAdminsRequest : public ChimeRequest {

public:
    ListAppInstanceAdminsRequest(const ListAppInstanceAdminsRequest &other);
    ListAppInstanceAdminsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceAdminsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif

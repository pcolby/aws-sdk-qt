// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELEASELABELSREQUEST_H
#define QTAWS_LISTRELEASELABELSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListReleaseLabelsRequestPrivate;

class QTAWSEMR_EXPORT ListReleaseLabelsRequest : public EmrRequest {

public:
    ListReleaseLabelsRequest(const ListReleaseLabelsRequest &other);
    ListReleaseLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReleaseLabelsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif

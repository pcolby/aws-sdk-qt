// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHESAURUSREQUEST_H
#define QTAWS_UPDATETHESAURUSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class UpdateThesaurusRequestPrivate;

class QTAWSKENDRA_EXPORT UpdateThesaurusRequest : public KendraRequest {

public:
    UpdateThesaurusRequest(const UpdateThesaurusRequest &other);
    UpdateThesaurusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif

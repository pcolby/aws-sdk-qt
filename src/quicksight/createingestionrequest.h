// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINGESTIONREQUEST_H
#define QTAWS_CREATEINGESTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateIngestionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateIngestionRequest : public QuickSightRequest {

public:
    CreateIngestionRequest(const CreateIngestionRequest &other);
    CreateIngestionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

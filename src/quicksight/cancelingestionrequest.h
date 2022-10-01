// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINGESTIONREQUEST_H
#define QTAWS_CANCELINGESTIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CancelIngestionRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CancelIngestionRequest : public QuickSightRequest {

public:
    CancelIngestionRequest(const CancelIngestionRequest &other);
    CancelIngestionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif

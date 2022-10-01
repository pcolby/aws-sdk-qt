// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILTERRESPONSE_H
#define QTAWS_DESCRIBEFILTERRESPONSE_H

#include "personalizeresponse.h"
#include "describefilterrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeFilterResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeFilterResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeFilterResponse(const DescribeFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFilterResponse)
    Q_DISABLE_COPY(DescribeFilterResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPAGERESPONSE_H
#define QTAWS_DESCRIBEPAGERESPONSE_H

#include "ssmcontactsresponse.h"
#include "describepagerequest.h"

namespace QtAws {
namespace SsmContacts {

class DescribePageResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT DescribePageResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    DescribePageResponse(const DescribePageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePageResponse)
    Q_DISABLE_COPY(DescribePageResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif

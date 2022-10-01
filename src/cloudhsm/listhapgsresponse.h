// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHAPGSRESPONSE_H
#define QTAWS_LISTHAPGSRESPONSE_H

#include "cloudhsmresponse.h"
#include "listhapgsrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListHapgsResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ListHapgsResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ListHapgsResponse(const ListHapgsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHapgsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHapgsResponse)
    Q_DISABLE_COPY(ListHapgsResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

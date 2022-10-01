// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHSMSRESPONSE_H
#define QTAWS_LISTHSMSRESPONSE_H

#include "cloudhsmresponse.h"
#include "listhsmsrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListHsmsResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ListHsmsResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ListHsmsResponse(const ListHsmsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHsmsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHsmsResponse)
    Q_DISABLE_COPY(ListHsmsResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif

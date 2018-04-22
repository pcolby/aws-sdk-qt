/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTTAGSFORCERTIFICATERESPONSE_P_H
#define QTAWS_LISTTAGSFORCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace ACM {

class ListTagsForCertificateResponse;

class QTAWS_EXPORT ListTagsForCertificateResponsePrivate : public AcmResponsePrivate {
    Q_OBJECT

public:

    ListTagsForCertificateResponsePrivate(ListTagsForCertificateResponse * const q);

    void parseListTagsForCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForCertificateResponse)
    Q_DISABLE_COPY(ListTagsForCertificateResponsePrivate)

};

} // namespace ACM
} // namespace QtAws

#endif
